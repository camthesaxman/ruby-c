int sub_808D640()
{
  void *v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(v202FFB4 + 1612) & 1 )
  {
    v0 = &unk_839F67E;
  }
  else
  {
    if ( sub_806912C() )
    {
      LoadPalette((int)&unk_839F73E, 1, 190);
      return v2;
    }
    v0 = &unk_8E87AF6;
  }
  LoadPalette((int)v0, 1, 190);
  return v2;
}
