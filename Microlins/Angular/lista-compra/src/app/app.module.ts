import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import { MercadoriasComponent } from './mercadorias/mercadorias.component';

@NgModule({
  declarations: [
    AppComponent,
    MercadoriasComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [],
  bootstrap: [MercadoriasComponent]
})
export class AppModule { }
