int sub_80E6764()
{
  unsigned int v0; // r3@1
  unsigned int v1; // r3@3
  unsigned int v2; // r3@5
  unsigned int v3; // r3@7
  unsigned int v4; // r2@8
  unsigned int v5; // r3@11
  int v7; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_WORD *)(2 * v0 + 0x2028250) = gUnknown_083DB7EC[v0];
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  v1 = 0;
  do
  {
    *(_WORD *)(2 * v1 + 0x202825C) = gUnknown_083DB7F4[v1];
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 5 );
  v2 = 0;
  do
  {
    *(_WORD *)(2 * v2 + 0x2028268);
    *(_WORD *)(2 * v2 + 0x2028268) = -1;
    *(_WORD *)(2 * v2 + 0x2028274);
    *(_WORD *)(2 * v2 + 0x2028274) = -1;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 5 );
  v3 = 0;
  do
  {
    v4 = 0;
    do
    {
      *(_WORD *)(2 * v4 + 36 * v3 + 0x2028280);
      *(_WORD *)(2 * v4 + 36 * v3 + 0x2028280) = -1;
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 8 );
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0xF );
  v5 = 0;
  do
  {
    *(_BYTE *)(v5 + 33719488) = 0;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0x3F );
  return v7;
}
