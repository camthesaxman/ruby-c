int sub_809AD94()
{
  signed __int16 v0; // r0@2
  int v1; // r1@8
  int v2; // r0@8
  int v3; // r7@11
  int v4; // r1@13
  int v5; // r0@13
  int v7; // [sp+10h] [bp-4h]@0

  if ( v20011DE )
    v0 = 12;
  else
    v0 = 6;
  v20011DC = v0;
  if ( v20011E3 )
    v20011E3 = (unsigned int)v20011DC >> 1;
  if ( v20011DE == -1 )
  {
    v1 = v20011DA;
    v2 = *(_WORD *)(v20011C0 + 34) + 192;
  }
  else if ( v20011DE == 1 )
  {
    v1 = v20011DA;
    v2 = *(_WORD *)(v20011C0 + 34) - 192;
  }
  else
  {
    v1 = v20011DA;
    v2 = *(_WORD *)(v20011C0 + 34);
  }
  v3 = v1 - v2;
  if ( v20011DF == -1 )
  {
    v4 = v20011D8;
    v5 = *(_WORD *)(v20011C0 + 32) + 192;
  }
  else if ( v20011DF == 1 )
  {
    v4 = v20011D8;
    v5 = *(_WORD *)(v20011C0 + 32) - 192;
  }
  else
  {
    v4 = v20011D8;
    v5 = *(_WORD *)(v20011C0 + 32);
  }
  v20011D0 = ((v4 - v5) << 8) / v20011DC;
  v20011D4 = (v3 << 8) / v20011DC;
  v20011C8 = *(_WORD *)(v20011C0 + 32) << 8;
  v20011CC = *(_WORD *)(v20011C0 + 34) << 8;
  return v7;
}
