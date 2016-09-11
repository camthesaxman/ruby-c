int __fastcall sub_808BECC(int a1)
{
  unsigned int v1; // r7@1
  unsigned int v2; // r5@1
  unsigned int v3; // r0@4
  int v4; // r5@5
  int v6; // [sp+0h] [bp-20h]@2
  int v7; // [sp+1Ch] [bp-4h]@7

  v1 = (unsigned int)((a1 << 24) + 0x1000000) >> 24;
  v2 = 0;
  if ( (unsigned __int8)gUnknown_0842C457[0] != 255 )
  {
    do
    {
      *((_BYTE *)&v6 + v2) = gUnknown_0842C457[v2];
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( (unsigned __int8)gUnknown_0842C457[v2] != 255 && v2 <= 5 );
  }
  v3 = v1 / 0xA;
  if ( v1 / 0xA & 0xFF )
  {
    *((_BYTE *)&v6 + v2) = v3 - 95;
    v4 = (v2 + 1) & 0xFFFF;
    *((_BYTE *)&v6 + v4) = v1 % 0xA - 95;
  }
  else
  {
    *((_BYTE *)&v6 + v2) = v1 % 0xA - 95;
    v4 = (v2 + 1) & 0xFFFF;
    *((_BYTE *)&v6 + v4) = 0;
  }
  *((_BYTE *)&v6 + ((v4 + 1) & 0xFFFF)) = -1;
  MenuPrint((int)&gUnknown_0842C44F, 15, 0xFu);
  MenuPrint((int)&v6, 18, 0xFu);
  return v7;
}
