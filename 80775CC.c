int __fastcall sub_80775CC(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  *((_WORD *)v2 + 6) = v3 - 1;
  if ( v3 << 16 <= 0 )
  {
    audio_play_and_stuff(*((_WORD *)v2 + 4), *((_BYTE *)v2 + 10));
    DestroyTask(v1);
    --v202F7B3;
  }
  return v5;
}
