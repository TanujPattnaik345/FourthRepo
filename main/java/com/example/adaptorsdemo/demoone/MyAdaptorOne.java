package com.example.adaptorsdemo.demoone;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;

import com.example.adaptorsdemo.R;

public class MyAdaptorOne extends BaseAdapter
{
    Context context;
    int[] data;
    LayoutInflater inflater;

    MyAdaptorOne(Context context, int[] data)
    {
        this.context=context;
        this.data=data;
        inflater=LayoutInflater.from(context);
    }

    @Override
    public int getCount() {
        return data.length;
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
        view=inflater.inflate(R.layout.ui_view_one, null);
        ImageView imgview_one=(ImageView) view.findViewById(R.id.imgview_one);
        imgview_one.setImageResource(data[i]);
        return view;
    }
}
