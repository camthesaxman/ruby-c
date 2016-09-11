int ma02_instanciate_template()
{
  int v0; // r1@1
  int v1; // r7@1
  unsigned int v2; // r4@1
  int v3; // r0@1
  __int16 *v4; // r5@2
  int v5; // r3@2
  int v6; // r2@3
  unsigned int v7; // r4@5
  int v8; // r0@6
  char v9; // r4@8
  _BYTE *v10; // r0@8
  int v11; // r0@10
  unsigned __int8 v12; // r0@13
  int v13; // r6@13
  int v14; // r4@15
  unsigned __int8 v15; // r0@15
  int v17; // [sp+10h] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = *v202F7A4 + (*(_BYTE *)(v202F7A4 + 1) << 8) + (*(_BYTE *)(v202F7A4 + 2) << 16) + (*(_BYTE *)(v202F7A4 + 3) << 24);
  v202F7A4 = v0 + 5;
  v2 = *(_BYTE *)(v0 + 5);
  v202F7A4 = v0 + 6;
  v3 = *(_BYTE *)(v0 + 6);
  v202F7A4 = v0 + 7;
  if ( v3 )
  {
    v4 = &word_3004B00;
    v5 = v3;
    do
    {
      v6 = v202F7A4;
      *v4 = *v202F7A4 | (unsigned __int16)(*(_BYTE *)(v202F7A4 + 1) << 8);
      v202F7A4 = v6 + 2;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 & 0x80 )
  {
    v7 = v2 ^ 0x80;
    if ( v7 <= 0x3F )
      v8 = -v7;
    else
      LOBYTE(v8) = v7 - 64;
    v9 = v8;
    v10 = (_BYTE *)33748937;
  }
  else
  {
    if ( v2 <= 0x3F )
      v11 = -v2;
    else
      LOBYTE(v11) = v2 - 64;
    v9 = v11;
    v10 = (_BYTE *)33748936;
  }
  v12 = sub_8079E90(*v10);
  v13 = (v12 + v9) & 0xFFFF;
  if ( (signed __int16)(v12 + v9) <= 2 )
    LOBYTE(v13) = 3;
  v14 = (unsigned __int8)sub_8077ABC(v202F7C9, 2);
  v15 = sub_8077ABC(v202F7C9, 3);
  CreateSpriteAndAnimate(v1, v14, v15, v13);
  ++v202F7B2;
  return v17;
}
