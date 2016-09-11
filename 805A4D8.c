signed int __fastcall fish4(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r2@1
  signed int result; // r0@4
  __int16 v5; // r1@7
  __int16 v6; // r2@7
  int v7; // [sp+0h] [bp-Ch]@1

  v1 = a1;
  v2 = memcpy(&v7, &gUnknown_0830FD00, 2);
  sub_805A954(v2);
  v3 = *(_WORD *)(v1 + 10) + 1;
  *(_WORD *)(v1 + 10) = v3;
  if ( word_300179E & 1 )
  {
    *(_WORD *)(v1 + 8) = 11;
    if ( *(_WORD *)(v1 + 32) )
      *(_WORD *)(v1 + 8) = 12;
    result = 1;
  }
  else
  {
    if ( v3 > 19 )
    {
      *(_WORD *)(v1 + 10) = 0;
      if ( *(_WORD *)(v1 + 12) < (signed int)*(_WORD *)(v1 + 14) )
      {
        MenuPrint(&v7, (*(_WORD *)(v1 + 12) + 4) & 0xFF, 15);
        ++*(_WORD *)(v1 + 12);
      }
      else
      {
        v5 = *(_WORD *)(v1 + 8) + 1;
        *(_WORD *)(v1 + 8) = v5;
        v6 = *(_WORD *)(v1 + 32);
        if ( *(_WORD *)(v1 + 32) )
          *(_WORD *)(v1 + 8) = v5 + 1;
        *(_WORD *)(v1 + 32) = v6 + 1;
      }
    }
    result = 0;
  }
  return result;
}
