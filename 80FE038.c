int __fastcall sub_80FE038(_WORD *a1)
{
  int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r3@1
  unsigned int v5; // r2@1

  v1 = *a1;
  v2 = v1 & 0x1F;
  v3 = v1 << 16;
  v4 = (v3 >> 21) & 0x1F;
  v5 = (v3 >> 26) & 0x1F;
  if ( v2 & 3 )
    v2 = (v2 & 0x1C) + 4;
  if ( (v3 >> 21) & 3 )
    v4 = ((v3 >> 21) & 0x1C) + 4;
  if ( (v3 >> 26) & 3 )
    v5 = ((v3 >> 26) & 0x1C) + 4;
  if ( v2 <= 5 )
    v2 = 6;
  if ( v2 > 0x1E )
    v2 = 30;
  if ( v4 <= 5 )
    v4 = 6;
  if ( v4 > 0x1E )
    v4 = 30;
  if ( v5 <= 5 )
    v5 = 6;
  if ( v5 > 0x1E )
    v5 = 30;
  return v2 | (v5 << 10) | 32 * v4;
}
