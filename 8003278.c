signed int __fastcall ExtCtrlCode_PlaySE(int a1)
{
  unsigned __int16 v1; // r1@1
  int v2; // r3@1
  int v3; // r4@1

  v1 = *(_WORD *)(a1 + 30);
  *(_WORD *)(a1 + 30) = v1 + 1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_BYTE *)(v2 + v1);
  *(_WORD *)(a1 + 30) = v1 + 2;
  audio_play(v3 | (*(_BYTE *)(v2 + (unsigned __int16)(v1 + 1)) << 8));
  return 2;
}
