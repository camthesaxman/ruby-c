_BYTE *__fastcall StringBraille(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r5@1
  _BYTE *v3; // r6@1
  _BYTE *v4; // r0@1
  char *v5; // r1@1
  _BYTE *i; // r5@2
  int v7; // r0@3
  _BYTE *v8; // r5@7
  int v10; // [sp+0h] [bp-1Ch]@1
  char v11; // [sp+4h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v10, &sSetBrailleFont, 4);
  memcpy(&v11, &sGotoLine2, 5);
  v4 = v2;
  v5 = (char *)&v10;
LABEL_2:
  for ( i = StringCopy(v4, v5); ; i = v8 + 1 )
  {
    v7 = *v3++;
    if ( v7 == 254 )
    {
      v4 = i;
      v5 = &v11;
      goto LABEL_2;
    }
    if ( v7 == 255 )
      break;
    *i = v7;
    v8 = i + 1;
    *v8 = v7 + 64;
  }
  *i = -1;
  return i;
}
