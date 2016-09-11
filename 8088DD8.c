int __fastcall sub_8088DD8(int a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  int v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = *(_WORD *)(a1 + 12);
  if ( !*(_WORD *)(a1 + 12) || (*(_WORD *)(a1 + 12) = v3 - 1, !((v3 - 1) << 16)) )
  {
    if ( FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
    {
      ++*(_WORD *)(v1 + 8);
      audio_play(0x9Eu);
      sub_8088FC0(*(_BYTE *)(v1 + 10));
    }
  }
  return v5;
}
