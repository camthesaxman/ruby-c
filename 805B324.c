int __fastcall MakeObjectTemplateFromFieldObjectGraphicsInfo(unsigned __int8 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r5@1
  int v5; // r4@1
  _DWORD *v6; // r6@1
  int v7; // r0@1
  int v9; // [sp+Ch] [bp-4h]@0

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = GetFieldObjectGraphicsInfo(a1);
  *(_WORD *)v5 = *(_WORD *)v7;
  *(_WORD *)(v5 + 2) = *(_WORD *)(v7 + 2);
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v7 + 24);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 28);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 32);
  *(_DWORD *)(v5 + 20) = v4;
  *v6 = *(_DWORD *)(v7 + 20);
  return v9;
}
