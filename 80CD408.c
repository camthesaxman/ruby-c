int __fastcall sub_80CD408(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  __int16 v3; // r3@5
  __int16 v4; // r4@5
  int v5; // r0@5
  char v6; // r0@5
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56);
  if ( v2 & 1 )
  {
    if ( (v2 & 1) == 1 )
    {
      v3 = *(_WORD *)(a1 + 36) + *(_WORD *)(a1 + 32);
      *(_WORD *)(a1 + 32) = v3;
      v4 = *(_WORD *)(a1 + 38) + *(_WORD *)(a1 + 34);
      *(_WORD *)(a1 + 34) = v4;
      *(_WORD *)(a1 + 38) = 0;
      *(_WORD *)(a1 + 36) = 0;
      *(_WORD *)(a1 + 46) = 8;
      v5 = 2 * (v2 << 16 >> 24);
      *(_WORD *)(v1 + 50) = v3 + gUnknown_083D6DDC[v5];
      *(_WORD *)(v1 + 54) = v4 + gUnknown_083D6DDC[v5 + 1];
      *(_DWORD *)(v1 + 28) = sub_8078B34;
      oamt_set_x3A_32(v1, (int)sub_80CD4B8);
      *(_WORD *)(v1 + 56) += 256;
      v6 = sub_8076F98(0x3Fu);
      audio_play_and_stuff(0xD2u, v6);
    }
  }
  else
  {
    *(_WORD *)(a1 + 46) = 1;
    *(_DWORD *)(a1 + 28) = sub_80782D8;
    oamt_set_x3A_32(a1, (int)sub_80CD408);
  }
  *(_WORD *)(v1 + 56) ^= 1u;
  return v8;
}
