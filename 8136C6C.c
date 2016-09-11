int sub_8136C6C()
{
  _BYTE *v0; // r0@1
  char i; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E709C);
  MenuDrawTextWindow(0, 0x10u);
  v0 = (_BYTE *)(v2039304 + 83);
  for ( i = 0; ; i = *(_BYTE *)(v2039304 + 83) + 1 )
  {
    *v0 = i;
    if ( (unsigned int)*(_BYTE *)(v2039304 + 83) > 4 )
      break;
    if ( *(_BYTE *)(v2039304 + 97 + *(_BYTE *)(v2039304 + 83)) )
    {
      if ( (unsigned int)*(_BYTE *)(v2039304 + 83) <= 4 )
      {
        sub_8136DC0(v2039304 + 16, *(_BYTE *)(v2039304 + 83), *(_BYTE *)(v2039304 + 97 + *(_BYTE *)(v2039304 + 83)));
        goto _08136CEE;
      }
      break;
    }
    v0 = (_BYTE *)(v2039304 + 83);
  }
  sub_8136DC0(v2039304 + 16, *(_BYTE *)(v2039304 + 83), 0);
_08136CEE:
  sub_8136DA0(v2039304 + 16);
  return v3;
}
