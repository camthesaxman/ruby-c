int __fastcall sub_80939DC(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v3; // [sp+0h] [bp-24h]@3
  int v4; // [sp+20h] [bp-4h]@3

  v1 = &dword_3004B20[10 * a1];
  if ( v2000005 != *((_WORD *)v1 + 5) )
  {
    *((_WORD *)v1 + 5) = v2000005;
    *((_WORD *)v1 + 4) ^= 1u;
  }
  sub_8094250(&v3, *((_WORD *)v1 + 4));
  MenuPrint((int)&v3, 10, 0xCu);
  return v4;
}
