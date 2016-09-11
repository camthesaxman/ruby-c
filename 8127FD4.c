int __fastcall sub_8127FD4(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-14h]@1
  int v6; // [sp+10h] [bp-4h]@3

  v2 = a1;
  v3 = a2;
  memcpy(&v5, (const char *)&gUnknown_08401E54, 5);
  if ( !(sub_8127F64(v3) << 24) )
    StartSpriteAnimIfDifferent(v3, *((_BYTE *)&v5 + ((unsigned int)*(_BYTE *)(v2 + 24) >> 4)));
  return v6;
}
