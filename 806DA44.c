int __fastcall sub_806DA44(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r2@2
  char *v5; // r1@2
  int *v6; // r0@3
  int (__fastcall *v7)(int); // r1@3
  int v9; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int8)a2;
  v3 = a3;
  if ( (unsigned __int8)a2 <= 5u )
  {
    v4 = 17 * (unsigned __int8)sub_806DDA0(a1, a2);
    v5 = &gSprites[v4 * 4];
    *((_WORD *)v5 + 19) = 0;
    *((_WORD *)v5 + 23) = 0;
    if ( v3 )
    {
      v6 = &dword_2020020[v4];
      v7 = sub_806DA0C;
    }
    else
    {
      v6 = &dword_2020020[v4];
      v7 = (int (__fastcall *)(int))sub_806DA38;
    }
    *v6 = (int)v7;
  }
  return v9;
}
