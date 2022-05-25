package demotwo;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import com.example.adaptorsdemo.R;

public class MyAdaptorTwo extends BaseAdapter
{
    Context context;
    int[] animal_imgs;
    String[] animal_names;

    LayoutInflater inflater;

    MyAdaptorTwo(Context context, int[] animal_imgs, String[] animal_names)
    {
        this.context=context;
        this.animal_imgs=animal_imgs;
        this.animal_names=animal_names;

        inflater=LayoutInflater.from(context);
    }

    @Override
    public int getCount() {
        return animal_names.length;
    }

    @Override
    public Object getItem(int i) {
        return null;
    }

    @Override
    public long getItemId(int i) {
        return 0;
    }

    @Override
    public View getView(int i, View view, ViewGroup viewGroup) {
        view=inflater.inflate(R.layout.ui_view_two, null);

        ImageView imageView=(ImageView) view.findViewById(R.id.imgview_two);
        TextView textView=(TextView) view.findViewById(R.id.textview_two);

        imageView.setImageResource(animal_imgs[i]);
        textView.setText(animal_names[i]);

        return view;
    }
}
