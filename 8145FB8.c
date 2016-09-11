int pokedex_diploma_something()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int16)sub_8090FF4() )
  {
    v400001C = 256;
    StringCopy(gStringVar1, &gUnknown_0842D222);
  }
  else
  {
    v400001C = 0;
    StringCopy(gStringVar1, &gUnknown_0842D21C);
  }
  MenuPrint((int)&gUnknown_0842D22B, 6, 2u);
  return v1;
}
