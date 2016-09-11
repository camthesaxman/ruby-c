int __fastcall sub_8081424(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  signed int v3; // r0@1
  __int16 v4; // r0@8
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 == 1 )
  {
    sub_8081398(
      (int)&word_3004DE0[960 * (unsigned __int8)byte_3004DD4],
      *((_WORD *)v2 + 1),
      *((_WORD *)v2 + 2),
      *((_WORD *)v2 + 3));
    *(_WORD *)v2 = 0;
    v4 = *((_WORD *)v2 + 5) + *((_WORD *)v2 + 3);
    *((_WORD *)v2 + 3) = v4;
    if ( v4 > (signed int)*((_WORD *)v2 + 4) )
    {
      if ( *((_WORD *)v2 + 6) == 1 )
      {
        remove_some_task(1);
        *(_WORD *)v2 = 2;
      }
      else
      {
        DestroyTask(v1);
      }
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      dp12_8087EA4(2);
      DestroyTask(v1);
    }
  }
  else if ( !*(_WORD *)v2 )
  {
    sub_8081398(
      (int)&word_3004DE0[960 * (unsigned __int8)byte_3004DD4],
      *((_WORD *)v2 + 1),
      *((_WORD *)v2 + 2),
      *((_WORD *)v2 + 3));
    *(_WORD *)v2 = 1;
  }
  return v6;
}
