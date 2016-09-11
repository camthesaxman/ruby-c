signed int __fastcall sub_8041EEC(int a1, int a2, _BYTE *a3)
{
  int v3; // r8@1
  int v4; // r6@1
  unsigned int v5; // r4@1
  __int16 v6; // r0@2
  signed int v7; // r4@7
  char v8; // r1@15
  int v10; // [sp+0h] [bp-1Ch]@2

  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    v6 = GetBoxMonData((unsigned int *)(v3 + 80 * v5), 11, a3);
    *((_WORD *)&v10 + v5) = v6;
    if ( v6 == 132 )
    {
      *(_BYTE *)v4 = v5 ^ 1;
      *(_BYTE *)(v4 + 1) = v5;
    }
    else if ( (unsigned __int8)GetBoxMonGender(v3 + 80 * v5) == 254 )
    {
      *(_BYTE *)v4 = v5;
      *(_BYTE *)(v4 + 1) = v5 ^ 1;
    }
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 1 );
  v7 = (unsigned __int16)sub_8041870(*((_WORD *)&v10 + *(_BYTE *)v4));
  if ( v7 == 29 && *(_WORD *)(v3 + 280) & 0x8000 )
    v7 = 32;
  if ( v7 == 387 && *(_WORD *)(v3 + 280) & 0x8000 )
    v7 = 386;
  if ( *((_WORD *)&v10 + *(_BYTE *)(v4 + 1)) == 132 && (unsigned __int8)GetBoxMonGender(80 * *(_BYTE *)v4 + v3) != 254 )
  {
    v8 = *(_BYTE *)(v4 + 1);
    *(_BYTE *)(v4 + 1) = *(_BYTE *)v4;
    *(_BYTE *)v4 = v8;
  }
  return v7;
}
