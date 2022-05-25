package com.example.adaptorsdemo.demoone;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.GridView;

import com.example.adaptorsdemo.R;

public class MainActivityOne extends AppCompatActivity {

    GridView gridview_one;

    int[] animals_arr={R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger, R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger, R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger, R.drawable.bear, R.drawable.cat, R.drawable.cow, R.drawable.dog, R.drawable.elephant, R.drawable.fox, R.drawable.tiger};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main_one);

        gridview_one=(GridView) findViewById(R.id.gridview_one);

        MyAdaptorOne adaptorOne=new MyAdaptorOne(getApplicationContext(), animals_arr);
        gridview_one.setAdapter(adaptorOne);
    }
}