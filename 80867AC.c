signed int __fastcall sub_80867AC(int a1)
{
  int v1; // r9@1
  int *v2; // r5@1
  char *v3; // r4@1
  unsigned __int8 v4; // r0@1
  char v5; // r0@1

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = &gSprites[68 * v202E85C];
  CameraObjectReset2();
  BYTE1(dword_30048A0[9 * v202E85D]) |= 0x20u;
  v202E85E = 1;
  v4 = player_get_direction_lower_nybble();
  v5 = GetFaceDirectionAnimId(v4);
  FieldObjectSetSpecialAnim(v2, v5);
  *(_WORD *)(v1 + 16) = (unsigned int)(unsigned __int8)v3[66] >> 6;
  *((_BYTE *)v2 + 3) |= 4u;
  v3[5] = v3[5] & 0xF3 | 4;
  v3[66] = v3[66] & 0x3F | 0x80;
  ++*(_WORD *)(v1 + 8);
  return 1;
}
