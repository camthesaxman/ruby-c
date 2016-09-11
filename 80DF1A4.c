int __fastcall sub_80DF1A4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 16;
  *((_WORD *)v1 + 13) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *((_WORD *)v1 + 14) = (unsigned __int8)sub_8077FC0(v202F7C8);
  v2 = sub_807A100(v202F7C8, 1u);
  *((_WORD *)v1 + 15) = ((signed int)((signed __int16)v2 + ((unsigned int)(v2 << 16) >> 31)) >> 1) + 8;
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 9) = (unsigned __int8)sub_8079ED4(v202F7C8);
  *((_WORD *)v1 + 10) = (unsigned __int8)sub_8079E90(v202F7C8) - 2;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = 16;
  v4000050 = 16192;
  v4000052 = 4096;
  *((_WORD *)v1 + 12) = 0;
  *v1 = (int)sub_80DF24C;
  return v4;
}
