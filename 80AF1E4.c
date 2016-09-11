int __fastcall sub_80AF1E4(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  int v3; // r3@2
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  if ( a2 << 24 )
    LOBYTE(v3) = 14;
  else
    v3 = (a1 + 10) & 0xFF;
  if ( *(_WORD *)(28 * a1 + 0x2019266) )
    PutWindowTilemap((_BYTE *)0x20238CC, &gMoveNames[13 * *(_WORD *)(28 * a1 + 0x2019266)], v3);
  else
    PutWindowTilemap((_BYTE *)0x20238CC, "ÇÝççÙØ", v3);
  sub_80AF2A0(v2);
  sub_8003460(
    (int)&unk_3004210,
    33700044,
    (unsigned int)(1310720 * v2 + 45613056) >> 16,
    gUnknown_083CA318[2 * v2],
    gUnknown_083CA318[2 * v2 + 1]);
  return v5;
}
