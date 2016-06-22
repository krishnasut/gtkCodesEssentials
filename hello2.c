#include <gtk/gtk.h> 

int main(int argc, char *argv[]) {
	
	GtkWidget *win , *label ;
	
	gtk_init(&argc , &argv) ;
	
	win = gtk_window_new(GTK_WINDOW_TOPLEVEL) ;
	
	g_signal_connect(win, "delete-event" , G_CALLBACK(gtk_main_quit) , NULL) ;
	
	label = gtk_label_new("Hello GOSAII") ;
	//gtk_label_set_text(GtkWidget *label, "Hello Gosaii") ;
	
	gtk_container_add(GTK_CONTAINER(win) , label) ;
	
	gtk_widget_show_all(win) ;
	
	
	
	gtk_main() ;
	
	return 0 ;
}

