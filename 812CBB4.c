int __fastcall sub_812CBB4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  int v3; // r0@2
  char v4; // r0@4
  int v5; // r0@5
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  if ( *(_WORD *)(a1 + 50) )
  {
    *(_WORD *)(a1 + 36) -= *(_WORD *)(a1 + 48);
    v5 = *(_WORD *)(a1 + 36);
    if ( v5 < 0 )
      v5 = -v5;
    if ( v5 == 12 )
    {
      --*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 50) = v2 - 1;
    }
  }
  else
  {
    v3 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 36);
    *(_WORD *)(v1 + 36) = v3;
    if ( !(v3 << 16) )
    {
      *(_WORD *)(v1 + 50) = v2 + 1;
      if ( !*(_WORD *)(v1 + 52) )
      {
        v4 = sub_8076F98(0xC0u);
        sub_80754F8(0xDEu, v4);
      }
    }
  }
  if ( !*(_WORD *)(v1 + 46) )
    move_anim_8072740(v1);
  return v7;
}
