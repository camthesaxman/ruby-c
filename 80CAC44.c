int __fastcall sub_80CAC44(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r1@1
  int v4; // r0@2
  unsigned int v5; // r2@3
  __int16 v6; // r0@6
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), 32);
  v2 = cosine(*(_WORD *)(v1 + 48), -3);
  v3 = *(_WORD *)(v1 + 50) + 24;
  *(_WORD *)(v1 + 50) = v3;
  *(_WORD *)(v1 + 38) = v2 + (v3 << 16 >> 24);
  if ( ((*(_WORD *)(v1 + 48) - 64) & 0xFFFFu) > 0x7F )
  {
    v5 = (sub_8079ED4(v202F7C9) + 1) & 0xFF;
    if ( v5 > 3 )
      LOBYTE(v5) = 3;
    v4 = (unsigned __int8)(*(_BYTE *)(v1 + 5) & 0xF3) | 4 * (v5 & 3);
  }
  else
  {
    v4 = (unsigned __int8)(*(_BYTE *)(v1 + 5) & 0xF3) | 4 * (sub_8079ED4(v202F7C9) & 3);
  }
  *(_BYTE *)(v1 + 5) = v4;
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 2) & 0xFF;
  v6 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v6;
  if ( v6 == -1 )
    move_anim_8072740(v1);
  return v8;
}
