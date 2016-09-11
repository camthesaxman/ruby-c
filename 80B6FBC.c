int sub_80B6FBC()
{
  unsigned __int8 v0; // r0@1
  _BYTE *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = sub_80B6F84();
  v1 = (_BYTE *)(v0 + 33554449);
  *(_BYTE *)(v0 + 0x2000011) = 0;
  sub_80B7960(0);
  *v1 = -1;
  v2 = (unsigned __int8)sub_80B6958();
  if ( !v2 || v2 == 2 )
    sub_80B6460(1u, 0, 1u);
  audio_play(0x17u);
  return v4;
}
