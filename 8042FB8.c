int __fastcall c3_080472E4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
    sub_8074D08(*((_WORD *)v2 + 4));
  if ( *((_WORD *)v2 + 4) == 1 )
    sub_8075474(376);
  if ( (signed int)*((_WORD *)v2 + 4) > 60 )
  {
    sub_8075474(377);
    DestroyTask(v1);
  }
  ++*((_WORD *)v2 + 4);
  return v4;
}
