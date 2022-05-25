package demotwo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ListView;

import com.example.adaptorsdemo.R;

public class MainActivityTwo extends AppCompatActivity {

    ListView listview_two;

    int[] animal_imgs={R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger, R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger};
    String[] animal_name={"Bear", "Cat", "Cow", "Dog", "Elephant", "Fox", "Tiger", "Bear", "Cat", "Cow", "Dog", "Elephant", "Fox", "Tiger"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main_two);

        listview_two=(ListView) findViewById(R.id.listview_two);

        MyAdaptorTwo adaptorTwo=new MyAdaptorTwo(getApplicationContext(), animal_imgs, animal_name);
        listview_two.setAdapter(adaptorTwo);
    }
}