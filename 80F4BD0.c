int sub_80F4BD0()
{
  unsigned int v0; // r6@1
  int v1; // r7@1
  int i; // r2@1
  int v3; // r3@3
  _BYTE *v4; // r5@3
  _BYTE *v5; // r2@5
  int v7; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  for ( i = 0x2000000; v0 < v2008828; v0 = (v0 + 1) & 0xFFFF )
  {
    if ( !GetMonData((int)&dword_3004360[25 * v0], 45, i) )
    {
      v3 = 4 * v1 + 0x2000000;
      *(_BYTE *)(v3 + 35133) = 14;
      v4 = (_BYTE *)(4 * v1 + 33589566);
      *v4 = *(_BYTE *)(4 * v1 + 0x200893E) & 0xE0 | v0 & 0x1F;
      i = 32 * ((v1 + 1) & 0x1FF);
      *(_WORD *)v4 = *(_WORD *)(4 * v1 + 0x200893E) & 0xC01F | i;
      *(_BYTE *)(v3 + 35135) |= 0x40u;
      v1 = (v1 + 1) & 0xFFFF;
    }
  }
  *(_BYTE *)(4 * v1 + 0x200893D) = 0;
  v5 = (_BYTE *)(4 * v1 + 33589566);
  *v5 = *(_BYTE *)(4 * v1 + 0x200893E) & 0xE0;
  *(_WORD *)v5 = *(_WORD *)(4 * v1 + 0x200893E) & 0xC01F;
  *(_BYTE *)(4 * v1 + 0x200893F) &= 0xBFu;
  v20087DC = 0;
  v20087DA = v1 + 1;
  sub_80F4B20();
  v20087CB = 1;
  return v7;
}
