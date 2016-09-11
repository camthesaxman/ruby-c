int unref_sub_80B20C4()
{
  signed int v0; // r6@1
  int v1; // r4@4
  __int16 v2; // r0@4
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(v0 + 33657565) && !(sub_80AF59C(v0) << 24) )
    {
      v1 = (5 * *(_BYTE *)(v0 + 33785494) + 2) & 0xFF;
      v2 = sub_80AEFE8((unsigned __int8)v0, 3);
      v1 <<= 6;
      *(_WORD *)(v1 + 100712488) = v2;
      *(_WORD *)(v1 + 100712490) = v2 + 1;
      *(_WORD *)(v1 + 100712552) = v2 + 16;
      *(_WORD *)(v1 + 100712554) = v2 + 17;
      audio_play(0x63u);
    }
    ++v0;
  }
  while ( v0 <= 3 );
  return v4;
}
