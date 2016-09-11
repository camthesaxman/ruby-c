int __fastcall sub_80E43C0(unsigned __int8 a1)
{
  signed __int16 v1; // r4@1
  int (*v2)(); // r0@2
  int *v3; // r1@7
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v20239F8 & 2 )
  {
    v2 = sub_80E4C34;
  }
  else if ( v20239F8 & 0x1000 && gGameVersion != 2 )
  {
    v1 = 3;
    v2 = task00_battle_intro_80BC6C8;
  }
  else
  {
    v2 = (int (*)())*(&gUnknown_083DB56C + a1);
  }
  v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)v2, 0)];
  *((_WORD *)v3 + 4) = 0;
  *((_WORD *)v3 + 5) = v1;
  *((_WORD *)v3 + 6) = 0;
  *((_WORD *)v3 + 7) = 0;
  *((_WORD *)v3 + 8) = 0;
  *((_WORD *)v3 + 9) = 0;
  *((_WORD *)v3 + 10) = 0;
  return v5;
}
