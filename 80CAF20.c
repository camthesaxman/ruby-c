int __fastcall sub_80CAF20(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  if ( *(_WORD *)(v1 + 50) )
  {
    *(_WORD *)(v1 + 50) = v2 - 1;
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 48);
  }
  else
  {
    if ( *(_WORD *)(v1 + 48) & 1 )
    {
      *(_WORD *)(v1 + 46) = 128;
      *(_WORD *)(v1 + 48) = 0;
      *(_WORD *)(v1 + 50) = 0;
    }
    else
    {
      *(_WORD *)(v1 + 46) = 0;
      *(_WORD *)(v1 + 48) = 0;
      *(_WORD *)(v1 + 50) = 0;
    }
    *(_DWORD *)(v1 + 28) = sub_80CAF6C;
  }
  return v4;
}
