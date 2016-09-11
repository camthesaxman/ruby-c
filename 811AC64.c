int __fastcall sub_811AC64(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r1@1
  __int16 v3; // r2@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    if ( sub_811D52C() << 24 )
      DestroyTask(v1);
  }
  else
  {
    *((_WORD *)v2 + 4) = 1;
    sub_811D4C8(0, 0, 3, 2);
  }
  return v5;
}
