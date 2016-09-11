int __fastcall sub_80E1F0C(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = sub_80E1DC4(*(_WORD *)(a1 + 60));
    BlendPalettes(v2, 0, 0);
    move_anim_8072740(v1);
  }
  return v4;
}
