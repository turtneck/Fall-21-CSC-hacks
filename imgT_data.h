#ifndef imgT_data_h
#define imgT_data_h

class imgT_data {
	private:
	  int data[8][8] = {
		{   255,	   255,	     0,	     0,	   255,	   255,	   255,	   255,	},
		{   255,	     0,	   255,	   255,	   255,	     0,	   255,	   255,	},
		{   255,	   255,	     0,	     0,	   255,	   255,	   255,	   255,	},
		{   255,	   255,	   255,	   255,	   255,	   255,	   255,	   255,	},
		{   255,	   255,	   255,	   255,	   255,	   255,	     0,	   255,	},
		{   255,	   255,	   255,	     0,	     0,	   255,	   255,	   255,	},
		{   255,	   255,	   255,	     0,	     0,	   255,	   255,	   255,	},
		{   255,	   255,	   255,	   255,	   255,	   255,	   255,	   255,	},
		};

	public:
	  int getarr(int a, int b){return data[a][b];}

};

#endif
