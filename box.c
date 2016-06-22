#include <gtk/gtk.h> 

int main(int argc , char *argv[]) {
	
	GtkWidget *win , *labela , *labelb ,  *box  ;
	
	gtk_init(&argc , &argv) ;
	win = gtk_window_new(GTK_WINDOW_TOPLEVEL) ;
	gtk_window_set_title(GTK_WINDOW(win) , "Wishing U" ) ;
	gtk_window_set_default_size(GTK_WINDOW(win) , 700 , 700) ;
	
	g_signal_connect(win , "delete-event" , G_CALLBACK(gtk_main_quit) , NULL) ; 
	
	box= gtk_vbox_new(0, 2) ;
	
	labela = gtk_label_new("this is our Program " ) ;
	labelb =  gtk_label_new("You can use it ") ;
	
	gtk_box_pack_start(GTK_BOX(box) , labela , 0 , 5, 0) ;
	gtk_box_pack_end(GTK_BOX(box) , labelb , 0 , 5, 0) ;
	
	
	gtk_container_add(GTK_CONTAINER(win) , box) ;
	
	gtk_widget_show_all(win) ;
	
	
	
	gtk_main() ;
	
	return 0 ;
}
