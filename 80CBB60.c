int __fastcall sub_80CBB60(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v3; // r0@3
  char v4; // r0@4
  char v5; // r0@6
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + (unsigned int)(((signed int)*(_WORD *)(a1 + 52) << 7) / *(_WORD *)(a1 + 54));
  *(_WORD *)(a1 + 46) = v2;
  if ( v2 > 127 )
  {
    ++*(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 46) = 0;
  }
  v3 = sine((signed __int16)(*(_WORD *)(a1 + 46) + 128), 30 - 8 * *(_WORD *)(a1 + 48));
  *(_WORD *)(v1 + 38) = v3;
  if ( !(v3 << 16) )
  {
    v4 = sub_8076F98(0x3Fu);
    audio_play_and_stuff(0x7Du, v4);
  }
  if ( sub_80CB814(v1) << 24 )
  {
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_80CB8B8;
    v5 = sub_8076F98(0xC0u);
    audio_play_and_stuff(0x7Du, v5);
  }
  return v7;
}
