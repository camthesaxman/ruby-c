int __fastcall sub_80C6598(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(0x9Bu);
  *(_BYTE *)(v1 + 42) = v202FFA0;
  *(_WORD *)(v1 + 46) = 0;
  *(_DWORD *)(v1 + 28) = sub_80C65C4;
  return v3;
}
