int atk89_statbuffchange()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !(sub_8025E20(
           (char)(v201601E & 0xF0),
           v201601E & 0xF,
           *(_BYTE *)(v2024C10 + 1),
           *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24)) << 24) )
    v2024C10 += 6;
  return v1;
}
