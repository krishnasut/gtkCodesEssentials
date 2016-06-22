#include <gtk/gtk.h> 

GtkWidget *win , *label , *button , *box ;

static void go(GtkWidget *w , gpointer data) {
	g_print("clicked" ) ;
	gtk_label_set_text(GTK_LABEL(label) , "Fine") ;
	gtk_window_set_title(GTK_WINDOW(win) , "Ahha GOOD ") ;
	
}


int main(int argc , char *argv[]) {
	
	// declare widgets 
	
	//gtk_init
	gtk_init(&argc , &argv) ;
	
	//create a toplevel window 
	win = gtk_window_new(GTK_WINDOW_TOPLEVEL) ;
	//set window title 
	gtk_window_set_title(GTK_WINDOW(win) , "pacha makak ") ;
	//set window size 
	gtk_window_set_default_size(GTK_WINDOW(win) , 700 , 700) ;
	//create a label 
	label = gtk_label_new("((())))") ;
	//create a button 
	button = gtk_button_new_with_label("Click Me to Sing ") ;
	
	//ADD SIGNAL 
	g_signal_connect(button , "clicked" , G_CALLBACK(go) , NULL) ;
	
	
	//create a box 
	box = gtk_vbox_new(0 , 0) ;
	gtk_box_pack_start(GTK_BOX(box) , label , 0 , 0 , 0 ) ;
	gtk_box_pack_start(GTK_BOX(box) , button , 0 , 1 , 0 ) ;
	
	//attach 
	gtk_container_add(GTK_CONTAINER(win)  , box ) ;
	
	//show all widgets 
	gtk_widget_show_all(win) ;
	
	
	//desytroy 
	g_signal_connect(win , "delete-event" , G_CALLBACK(gtk_main_quit) , NULL) ;
	
	
	
	
	
	
	//gtk_mail loop
	gtk_main() ;
	
	return 0 ; 
}
