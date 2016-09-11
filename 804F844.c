int __fastcall sub_804F844(unsigned __int8 a1)
{
  int v1; // r3@1
  int *v2; // r2@1
  __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 > (signed int)*((_WORD *)v2 + 5) )
  {
    word_3002A30[*((_WORD *)v2 + 6)] = 9029;
    DestroyTask(v1);
  }
  return v5;
}
