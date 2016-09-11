int __fastcall sub_806D4AC(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r1@2
  char *v5; // r4@2
  int v7; // [sp+8h] [bp-4h]@0

  v3 = a1;
  a3 = (unsigned __int8)a3;
  if ( a2 << 16 )
  {
    v4 = 17 * (unsigned __int8)sub_806DDA0(a1, (a3 + 3) & 0xFF);
    v5 = &gSprites[v4 * 4];
    *((_WORD *)v5 + 23) = -8;
    *((_WORD *)v5 + 25) = -8 * LOWORD(dword_3004B20[10 * v3 + 2]);
    dword_2020020[v4] = (int)sub_806D37C;
  }
  return v7;
}
