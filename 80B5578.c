signed int __fastcall sub_80B5578(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int16 v5; // r9@1
  int v6; // r8@1
  int v7; // r6@1
  signed int result; // r0@2
  int v9; // r4@3
  void ***v10; // r0@3
  unsigned int v11; // r6@3
  int v12; // r10@3
  unsigned int v13; // r0@7
  signed int v14; // r1@7
  int v15; // r7@9
  unsigned __int8 v16; // r0@9
  int *v17; // r1@9
  __int16 v18; // [sp+Ch] [bp-24h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v18 = a4;
  if ( (unsigned __int8)FuncIsActiveTask((int)sub_80B5684) == 1 )
  {
    result = 0;
  }
  else
  {
    v202E8DC = 255;
    v9 = 8 * v7;
    v10 = (void ***)&gMultichoiceLists[8 * v7];
    v11 = *((_BYTE *)v10 + 4);
    sub_807274C(v5, v6, v11, 0, (int)*v10, a5, 0);
    v12 = (unsigned __int8)CreateTask((int)sub_80B5684, 80);
    if ( (v11 << 24 >> 25 < a5 || v11 & 1) && a5 != 1 && (unsigned __int8)v11 != a5 )
    {
      v13 = (2 * (v11 / a5) & 0x1FF) + 3;
      v14 = v6 << 24;
    }
    else
    {
      v13 = (2 * (gMultichoiceLists[v9 + 4] / (unsigned int)a5) & 0x1FF) + 1;
      v14 = v6 << 24;
    }
    v15 = ((v14 >> 24) + v13) & 0xFF;
    v16 = sub_807288C(a5);
    v17 = &dword_3004B20[10 * v12];
    *((_WORD *)v17 + 4) = v5;
    *((_WORD *)v17 + 5) = v6;
    *((_WORD *)v17 + 6) = v16 + v5 + 2;
    *((_WORD *)v17 + 7) = v15;
    *((_WORD *)v17 + 8) = v18;
    result = 1;
  }
  return result;
}
