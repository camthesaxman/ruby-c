int __fastcall objc_0804ABD4(int a1)
{
  int v1; // r7@1
  int v2; // r6@2
  int *v3; // r0@2
  int v4; // r5@2
  __int16 v5; // r8@2
  unsigned __int16 v6; // r0@2
  int v7; // r4@2
  int v9; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718() << 24 )
  {
    v2 = *(_BYTE *)(v1 + 6);
    v3 = &dword_3004B20[10 * v2];
    v4 = *((_BYTE *)v3 + 16);
    v5 = *((_BYTE *)v3 + 12);
    StartSpriteAnim(v1, 1);
    *(_BYTE *)(v1 + 44) |= 0x80u;
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 56) = 0;
    v6 = sub_8047978(v4);
    v7 = (unsigned __int8)ball_number_to_ball_processing_index(v6);
    sub_814086C(*(_WORD *)(v1 + 32) & 0xFF, (*(_WORD *)(v1 + 34) - 5) & 0xFF, 1, 28);
    *(_WORD *)(v1 + 46) = (unsigned __int8)sub_8141314(0, v4, 14, v7);
    *(_WORD *)(v1 + 58) = v4;
    *(_WORD *)(v1 + 60) = v5;
    DestroyTask(v2);
    *(_DWORD *)(v1 + 28) = sub_80466E8;
  }
  return v9;
}
