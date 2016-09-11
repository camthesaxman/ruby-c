int __fastcall sub_80CA098(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 19) + 1;
  *((_WORD *)v2 + 19) = v3;
  if ( v3 > 7 )
  {
    audio_play(0x75u);
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A5C48, 1);
  }
  return v5;
}
