int __fastcall RemoveFieldObjectIfOutsideView(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  signed int v3; // r2@1
  int v4; // r7@1
  signed int v5; // r1@3
  signed int v6; // r1@5
  signed int v7; // r1@7
  int v9; // [sp+10h] [bp-4h]@0

  v1 = (v2025734 + 17) & 0xFFFF;
  v2 = (v2025736 + 16) & 0xFFFF;
  v3 = *(_WORD *)(a1 + 16);
  v4 = (v2025734 - 2) & 0xFFFF;
  if ( v3 < (signed __int16)(v2025734 - 2)
    || v3 > (signed __int16)v1
    || (v5 = *(_WORD *)(a1 + 18), v5 < v2025736)
    || v5 > (signed __int16)v2 )
  {
    v6 = *(_WORD *)(a1 + 12);
    if ( v6 < (signed __int16)v4
      || v6 > (signed __int16)v1
      || (v7 = *(_WORD *)(a1 + 14), v7 < v2025736)
      || v7 > (signed __int16)v2 )
    {
      RemoveFieldObject((_BYTE *)a1);
    }
  }
  return v9;
}
