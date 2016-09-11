int __fastcall sub_81100B8(int a1, signed int a2)
{
  int v2; // r2@1
  unsigned __int16 v3; // r0@7
  unsigned __int16 v4; // r0@9
  unsigned __int16 v5; // r0@11
  int v7; // [sp+0h] [bp-4h]@0

  v2 = a1;
  if ( a2 == 2 )
  {
    v4 = *(_WORD *)(a1 + 12) + 1;
    *(_WORD *)(v2 + 12) = v4;
    if ( v4 > 0x270Fu )
      *(_WORD *)(v2 + 12) = 9999;
  }
  else if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
      v5 = *(_WORD *)(a1 + 14) + 1;
      *(_WORD *)(v2 + 14) = v5;
      if ( v5 > 0x270Fu )
        *(_WORD *)(v2 + 14) = 9999;
    }
  }
  else if ( a2 == 1 )
  {
    v3 = *(_WORD *)(a1 + 10) + 1;
    *(_WORD *)(v2 + 10) = v3;
    if ( v3 > 0x270Fu )
      *(_WORD *)(v2 + 10) = 9999;
  }
  return v7;
}
