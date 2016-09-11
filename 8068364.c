signed int __fastcall sub_8068364(unsigned __int16 *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int16 *v3; // r4@1
  unsigned __int8 v4; // r5@1
  int v5; // r6@1
  int v6; // r3@1
  int *v7; // r1@2
  int v8; // r2@2
  signed int result; // r0@6
  int v10; // r0@7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int8)GetFieldObjectIdByXYZ(*a1, v3[1], *((_BYTE *)v3 + 4));
  if ( v6 != 16 && (v7 = dword_30048A0, v8 = 8 * v6, LOBYTE(dword_30048A0[9 * v6 + 2]) != 255)
    || (unsigned __int8)MetatileBehavior_IsCounter(v4) == 1
    && (v6 = (unsigned __int8)GetFieldObjectIdByXYZ(
                                *v3 + LOWORD(gUnknown_0821664C[2 * v5]),
                                v3[1] + LOWORD(gUnknown_0821664C[2 * v5 + 1]),
                                *((_BYTE *)v3 + 4)),
        v6 != 16)
    && (v7 = dword_30048A0, v8 = 8 * v6, LOBYTE(dword_30048A0[9 * v6 + 2]) != 255) )
  {
    byte_3004AE0 = v6;
    v202E8DE = *((_BYTE *)&v7[v8 + 2] + 4 * v6);
    v202E8E0 = v5;
    v10 = GetFieldObjectScriptPointerByFieldObjectId(v6);
    result = sub_806580C(v202E8DE, v10);
  }
  else
  {
    result = 0;
  }
  return result;
}
