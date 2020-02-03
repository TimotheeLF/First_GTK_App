#include <gtk-3.0/gtk/gtk.h>

int main(int argc, char* argv[]) {
    gtk_init (&argc, &argv);

    GtkWidget* window;
    GtkWidget* button1;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    button1 = gtk_button_new_with_label("Click here for a random prize");

    gtk_window_set_title(GTK_WINDOW (window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 700);

    gtk_button_set_alignment(GTK_BUTTON(button1), 0.5, 0.5);


    gtk_container_add(GTK_CONTAINER(window), button1);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
