int __fastcall sub_8123EB8(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@3
  __int16 v3; // r0@7
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) += 2 * *(_BYTE *)(a1 + 40);
    *(_WORD *)(a1 + 34) += *(_BYTE *)(a1 + 41) + 16;
  }
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 50) )
  {
    if ( *(_WORD *)(v1 + 48) )
    {
      if ( *(_WORD *)(v1 + 48) != 1 || !(*(_WORD *)(v1 + 46) & 1) )
      {
_08123F30:
        if ( (signed int)*(_WORD *)(v1 + 34) > 160 )
          DestroySprite(v1);
        return v5;
      }
      v3 = ++*(_WORD *)(v1 + 32);
    }
    else
    {
      ++*(_WORD *)(v1 + 32);
      v3 = *(_WORD *)(v1 + 46);
    }
    if ( !(v3 & 3) )
      ++*(_WORD *)(v1 + 34);
    goto _08123F30;
  }
  return v5;
}
